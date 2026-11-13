# GITHUB documentation

## Table of Contents

1. [Introduction & Getting Started](#1-introduction--getting-started)
2. [Repositories & Repository Management](#2-repositories--repository-management)
3. [Commits, Branches & Releases](#3-commits-branches--releases)
4. [Pull Requests & Code Reviews](#4-pull-requests--code-reviews)
5. [Issues, Projects & Discussions](#5-issues-projects--discussions)
6. [Collaboration & Open-Source Contributions](#6-collaboration--open-source-contributions)
7. [GitHub Actions, Best Practices & Resources](#7-github-actions-best-practices--resources)

---

## 1. Introduction & Getting Started

### 1.1 What is GitHub?

GitHub is a cloud-based platform used to host Git repositories and collaborate on software development projects.

It provides tools for version control, code review, project management, and automation.

### 1.2 Why Use GitHub?

- Hosts repositories online.
- Enables collaboration between developers.
- Tracks project changes and commit history.
- Supports code reviews through Pull Requests.
- Helps manage tasks and bugs using Issues.
- Automates workflows using GitHub Actions.
- Supports open-source development.

### 1.3 GitHub vs Git

| Git | GitHub |
|---|---|
| Distributed version control system | Cloud-based code hosting platform |
| Tracks changes locally | Hosts remote Git repositories |
| Works through terminal commands and GUI tools | Provides a web interface and collaboration tools |
| Manages commits and branches | Provides Pull Requests, Issues, Actions, and more |

### 1.4 Creating a GitHub Account

1. Visit [github.com](https://github.com/).
2. Select **Sign up**.
3. Enter your email address and create a password.
4. Choose a username.
5. Complete the verification process.
6. Sign in to your account.

### 1.5 Understanding the GitHub Interface

Some important sections of GitHub include:

| Section | Purpose |
|---|---|
| Repositories | Stores and organizes projects |
| Pull Requests | Proposes and reviews code changes |
| Issues | Tracks bugs, tasks, and feature requests |
| Projects | Organizes and tracks project work |
| Discussions | Provides a space for community conversations |
| Actions | Automates development workflows |
| Profile | Displays repositories, contributions, and activity |

### 1.6 Connecting Git with GitHub

Git can be connected to GitHub using HTTPS or SSH.

**HTTPS:** Uses a repository URL and typically requires authentication through a browser or personal access token when prompted.

**SSH:** Uses an SSH key pair to authenticate with GitHub.

To check your Git configuration:

```bash
git config --list
```

To connect an existing local repository to GitHub:

```bash
git remote add origin https://github.com/username/repository.git
```

To verify the connection:

```bash
git remote -v
```

### 1.7 Useful Links

- [GitHub Official Website](https://github.com/)
- [GitHub Documentation](https://docs.github.com/)
- [GitHub Skills](https://skills.github.com/)

---
## 2. Repositories & Repository Management

A GitHub repository is an online location where project files, source code, documentation, and version history are stored.

Repositories can be public or private and support collaboration between developers.

### 2.1 Creating a Repository

1. Sign in to GitHub.
2. Click the **+** icon in the top-right corner.
3. Select **New repository**.
4. Enter a repository name.
5. Add an optional description.
6. Choose **Public** or **Private** visibility.
7. Optionally add a README, `.gitignore`, and license.
8. Click **Create repository**.

### 2.2 Repository Visibility

| Type | Description |
|---|---|
| Public | Anyone can view the repository |
| Private | Only authorized users can access it |

### 2.3 Important Repository Files

| File | Purpose |
|---|---|
| `README.md` | Describes the project and provides instructions |
| `.gitignore` | Specifies files Git should ignore |
| `LICENSE` | Defines permissions and restrictions for using the project |
| `CONTRIBUTING.md` | Explains how others can contribute |
| `CODE_OF_CONDUCT.md` | Defines expected community behavior |

### 2.4 Uploading Files to GitHub

**Using the GitHub website:**

1. Open your repository.
2. Click **Add file**.
3. Select **Upload files**.
4. Choose the files you want to upload.
5. Add a commit message.
6. Click **Commit changes**.

**Using Git commands:**

```bash
git add .
git commit -m "Add project files"
git push origin main
```

### 2.5 Cloning a Repository

Cloning creates a local copy of a GitHub repository.

1. Open the repository on GitHub.
2. Click the **Code** button.
3. Copy the HTTPS or SSH URL.
4. Run:

```bash
git clone https://github.com/username/repository.git
```

### 2.6 Forking a Repository

A fork is a personal copy of another user's repository under your GitHub account.

Steps:

1. Open the repository you want to copy.
2. Click **Fork**.
3. Choose your GitHub account as the destination.
4. Create the fork.

Forks are commonly used when contributing to open-source projects.

### 2.7 Repository Settings

The **Settings** tab provides options to manage repository configuration.

Some important settings include:

- Changing repository visibility.
- Managing collaborators and access permissions.
- Renaming a repository.
- Configuring branches and protection rules.
- Managing webhooks and integrations.
- Archiving or deleting a repository.

### 2.8 Best Practices

- Use meaningful repository names.
- Write a clear README.
- Add an appropriate `.gitignore` file.
- Choose the correct repository visibility.
- Include a license when appropriate.
- Keep the repository organized and updated.

---
## 3. Commits, Branches & Releases

GitHub uses Git's version control features to track project changes, manage development branches, and publish stable versions of software.

### 3.1 Understanding Commits

A commit is a snapshot of changes saved in a Git repository.

Each commit contains information such as:
- Commit message.
- Author.
- Date and time.
- Changes introduced.
- Unique commit hash.

To create and push a commit:

```bash
git add .
git commit -m "Update project documentation"
git push origin main
```

### 3.2 Viewing Commit History

To view commit history:

```bash
git log
```

To view a compact history:

```bash
git log --oneline
```

On GitHub, open a repository and select the **Commits** link to view its commit history.

### 3.3 Working with Branches

Branches allow developers to work on different features without directly modifying the main branch.

Common branch names include:

- `main` — Main development or stable branch.
- `feature-login` — Login feature development.
- `bug-fix` — Bug-fixing work.
- `documentation` — Documentation updates.

Create a new branch:

```bash
git switch -c feature-login
```

Push the branch to GitHub:

```bash
git push -u origin feature-login
```

### 3.4 Managing Branches on GitHub

On the repository page:

1. Open the branch selector.
2. Select an existing branch or create a new one.
3. Navigate between branches to view their files and changes.

Branches can also be managed using the **Branches** section of a repository.

### 3.5 Understanding Releases

A GitHub Release represents a packaged version of a project.

Releases are generally associated with Git tags and can include:
- Version numbers.
- Release descriptions.
- Changelog information.
- Downloadable files or build artifacts.

Example version names:

```text
v1.0.0
v1.1.0
v2.0.0
```

### 3.6 Creating a Release

1. Open the repository.
2. Navigate to **Releases**.
3. Select **Draft a new release**.
4. Choose an existing tag or create a new one.
5. Add a release title.
6. Write release notes describing the changes.
7. Attach any required files.
8. Publish the release.

### 3.7 Git Tags

Tags mark specific points in a repository's history, commonly used for version releases.

Create a tag:

```bash
git tag v1.0.0
```

Push the tag to GitHub:

```bash
git push origin v1.0.0
```

List available tags:

```bash
git tag
```

### 3.8 Best Practices

- Write meaningful commit messages.
- Use separate branches for different features.
- Keep the main branch stable.
- Use consistent version numbering.
- Create releases for important project milestones.
- Include clear release notes.

---
## 4. Pull Requests & Code Reviews

A Pull Request (PR) is a feature on GitHub that allows developers to propose changes to a repository and request that those changes be reviewed and merged into another branch.

Pull Requests are commonly used in team projects and open-source contributions.

### 4.1 What is a Pull Request?

A Pull Request allows developers to:
- Propose code changes.
- Review changes before merging.
- Discuss improvements.
- Identify bugs.
- Run automated tests.
- Approve or request modifications.

### 4.2 Creating a Pull Request

**Step 1:** Create a new branch.

```bash
git switch -c feature-login
```

**Step 2:** Make changes to your code and commit them.

```bash
git add .
git commit -m "Add login feature"
```

**Step 3:** Push the branch to GitHub.

```bash
git push -u origin feature-login
```

**Step 4:** Open your GitHub repository.

**Step 5:** Navigate to the **Pull Requests** tab and click **New pull request**.

**Step 6:** Select:
- **Base:** The branch where you want the changes merged, usually `main`.
- **Compare:** The branch containing your changes, such as `feature-login`.

**Step 7:** Add a title and description explaining your changes.

**Step 8:** Click **Create pull request**.

### 4.3 Reviewing a Pull Request

To review someone else's PR:

1. Open the repository.
2. Navigate to the **Pull Requests** tab.
3. Select the PR you want to review.
4. Open the **Files changed** tab.
5. Examine the proposed code changes.
6. Add comments if necessary.
7. Click **Review changes**.

### 4.4 Types of PR Reviews

| Review Type | Meaning |
|---|---|
| Comment | Provides feedback without approving or requesting changes |
| Approve | Indicates that the changes are acceptable |
| Request changes | Requests modifications before merging |

### 4.5 Merging a Pull Request

Once the required reviews and checks are complete:

1. Open the Pull Request.
2. Review the changes and discussion.
3. Click **Merge pull request** if merging is permitted.
4. Confirm the merge.

GitHub supports different merging methods:

| Method | Description |
|---|---|
| Merge commit | Combines branches using a merge commit |
| Squash and merge | Combines all PR commits into one commit |
| Rebase and merge | Replays commits onto the base branch |

The available options depend on repository settings.

### 4.6 Closing a Pull Request

A Pull Request can be closed without merging if the proposed changes are no longer required.

Open the PR and select **Close pull request**.

### 4.7 Understanding PR Status

| Status | Meaning |
|---|---|
| Open | PR is awaiting review or merging |
| Draft | PR is still being prepared |
| Approved | Required review approval has been given |
| Merged | Changes have been integrated |
| Closed | PR was closed without merging |

### 4.8 Best Practices

- Use descriptive PR titles.
- Explain what changed and why.
- Keep Pull Requests focused and manageable.
- Review all changed files before approving.
- Provide clear and constructive feedback.
- Run tests before requesting a review.
- Do not approve code you have not properly reviewed.

---
## 5. Issues, Projects & Discussions

GitHub provides tools to organize tasks, report bugs, track progress, and communicate with contributors.

### 5.1 What are GitHub Issues?

GitHub Issues are used to track bugs, feature requests, improvements, and other project-related tasks.

They help developers organize and manage work within a repository.

### 5.2 Creating an Issue

1. Open a GitHub repository.
2. Navigate to the **Issues** tab.
3. Click **New issue**.
4. Enter a title describing the problem or task.
5. Add a detailed description.
6. Assign labels or milestones if required.
7. Click **Create**.

### 5.3 Important Issue Features

| Feature | Purpose |
|---|---|
| Assignees | Assigns an issue to specific contributors |
| Labels | Categorizes issues |
| Milestones | Groups issues around project goals or deadlines |
| Comments | Allows discussion about an issue |
| Projects | Helps organize and track related work |
| Linked Pull Requests | Connects issues with code changes |

### 5.4 Labels

Labels help categorize and prioritize issues.

Common examples include:

| Label | Purpose |
|---|---|
| `bug` | Identifies an error or defect |
| `enhancement` | Suggests an improvement |
| `documentation` | Relates to documentation |
| `good first issue` | Suitable for new contributors |
| `help wanted` | Requests community assistance |

Labels can be customized according to project requirements.

### 5.5 Linking Issues with Pull Requests

GitHub allows developers to link issues with Pull Requests.

Certain keywords in a PR description can automatically close an issue when the PR is merged into the repository's default branch.

Example:

```text
Closes #12
Fixes #15
Resolves #20
```

Here, `#12`, `#15`, and `#20` represent issue numbers.

### 5.6 What are GitHub Projects?

GitHub Projects is a project management tool used to organize tasks and track development progress.

It supports different views, including:

- **Table View:** Displays tasks in rows and columns.
- **Board View:** Organizes tasks into columns such as To Do, In Progress, and Done.
- **Roadmap View:** Displays work along a timeline.

Projects can include issues and Pull Requests from repositories.

### 5.7 What are GitHub Discussions?

GitHub Discussions provides a space for conversations between developers and community members.

It is useful for:
- Asking questions.
- Sharing ideas.
- Discussing new features.
- Getting community feedback.
- Sharing announcements.

Unlike Issues, Discussions are primarily intended for conversations rather than tracking specific tasks or bugs.

### 5.8 Issues vs Discussions vs Projects

| Feature | Main Purpose |
|---|---|
| Issues | Track bugs, tasks, and feature requests |
| Discussions | Facilitate questions and conversations |
| Projects | Organize work and monitor progress |

### 5.9 Best Practices

- Write clear and descriptive issue titles.
- Include steps to reproduce bugs.
- Use labels to organize issues.
- Assign tasks to appropriate contributors.
- Link related Pull Requests and Issues.
- Use Discussions for general questions and ideas.
- Keep project boards updated.

---
## 6. Collaboration & Open-Source Contributions

GitHub allows developers to work together on projects, contribute to existing repositories, and participate in open-source communities.

### 6.1 Collaborating on a Repository

Repository owners can invite other developers to collaborate.

Steps:

1. Open the repository.
2. Navigate to **Settings**.
3. Select **Collaborators** or the relevant access-management section.
4. Click **Add people**.
5. Search for the GitHub username or email address.
6. Send the invitation.

The invited user must accept the invitation to gain access.

### 6.2 Understanding Forks and Clones

| Fork | Clone |
|---|---|
| Creates a copy of a repository under your GitHub account | Creates a local copy on your computer |
| Used frequently for open-source contributions | Used for local development |
| Created through GitHub | Created using `git clone` |

### 6.3 Contributing to Open-Source Projects

A common open-source contribution workflow is:

**Step 1: Find a project**

Explore repositories on GitHub and choose a project that interests you.

**Step 2: Fork the repository**

Click the **Fork** button to create your own copy.

**Step 3: Clone your fork**

```bash id="xq5a4v"
git clone https://github.com/your-username/project.git
```

**Step 4: Create a new branch**

```bash id="v5b8mq"
git switch -c fix-bug
```

**Step 5: Make changes and commit**

```bash id="7x5jrf"
git add .
git commit -m "Fix reported bug"
```

**Step 6: Push changes to your fork**

```bash id="k4z8nj"
git push -u origin fix-bug
```

**Step 7: Create a Pull Request**

Open your fork on GitHub and create a Pull Request to propose your changes to the original repository.

### 6.4 Keeping Your Fork Updated

To get the latest changes from the original repository, first add it as an upstream remote:

```bash id="xv8y9d"
git remote add upstream https://github.com/original-owner/project.git
```

Fetch the latest changes:

```bash id="h9v5ce"
git fetch upstream
```

Update your local main branch:

```bash id="z3q5nk"
git switch main
git merge upstream/main
```

Push the updated branch to your fork:

```bash id="y6w2kp"
git push origin main
```

### 6.5 Understanding Repository Permissions

GitHub provides different access levels depending on the repository type and organization settings.

Common roles include:

| Role | General Permissions |
|---|---|
| Read | View and discuss repository content |
| Triage | Manage issues and Pull Requests without write access |
| Write | Push changes and manage repository content |
| Maintain | Manage the repository without certain sensitive administrative permissions |
| Admin | Full repository management permissions |

### 6.6 Contribution Guidelines

Before contributing to an open-source project:

- Read the repository's README.
- Check `CONTRIBUTING.md`, if available.
- Review existing Issues and Pull Requests.
- Follow the project's coding standards.
- Create a separate branch for your changes.
- Test your changes before submitting a PR.
- Respond to review feedback.

### 6.7 Best Practices

- Communicate clearly with other contributors.
- Respect project guidelines.
- Avoid making unrelated changes in one PR.
- Give constructive code-review feedback.
- Keep your fork synchronized with the original repository.
- Write clear commit messages and PR descriptions.

---
## 7. GitHub Actions, Best Practices & Resources

GitHub provides automation tools that help developers build, test, and maintain projects efficiently.

### 7.1 What is GitHub Actions?

GitHub Actions is an automation platform used to automate software development workflows directly within GitHub.

It can automatically run tasks when specific events occur in a repository.

Common uses include:

- Running automated tests.
- Building applications.
- Checking code quality.
- Deploying websites.
- Automating repetitive tasks.

### 7.2 Important GitHub Actions Concepts

| Term | Meaning |
|---|---|
| Workflow | An automated process defined in a YAML file |
| Event | An activity that triggers a workflow |
| Job | A group of steps executed on a runner |
| Step | An individual task within a job |
| Action | A reusable unit of automation |
| Runner | A server that executes workflow jobs |

### 7.3 Creating a GitHub Actions Workflow

GitHub Actions workflow files are stored inside:

```text id="w5j2hr"
.github/
└── workflows/
    └── main.yml
```

Example workflow:

```yaml id="y5z7pe"
name: Basic Workflow

on:
  push:
    branches: [main]

jobs:
  build:
    runs-on: ubuntu-latest

    steps:
      - name: Checkout repository
        uses: actions/checkout@v4

      - name: Display message
        run: echo "GitHub Actions is working!"
```

This workflow:
- Runs whenever code is pushed to the `main` branch.
- Uses an Ubuntu runner.
- Checks out the repository.
- Executes a simple command.

### 7.4 Understanding Workflow Triggers

Common events that can trigger workflows include:

| Event | Purpose |
|---|---|
| `push` | Runs when commits are pushed |
| `pull_request` | Runs when a Pull Request event occurs |
| `schedule` | Runs workflows on a scheduled basis |
| `workflow_dispatch` | Allows manual workflow execution |
| `release` | Runs when a release event occurs |

### 7.5 GitHub Actions Best Practices

- Keep workflows simple and organized.
- Use reusable actions when appropriate.
- Avoid exposing passwords, tokens, or API keys.
- Store sensitive values in GitHub Secrets.
- Use appropriate permissions for workflows.
- Check workflow logs when debugging failures.
- Pin third-party actions to trusted versions or commit SHAs.

### 7.6 General GitHub Best Practices

- Maintain a clear README file.
- Organize files and folders properly.
- Use meaningful commit messages.
- Create separate branches for features and fixes.
- Review Pull Requests before merging.
- Track tasks using Issues and Projects.
- Keep dependencies and documentation updated.
- Never upload sensitive credentials or private information.

### 7.7 Useful Resources

- [GitHub Official Website](https://github.com/)
- [GitHub Documentation](https://docs.github.com/)
- [GitHub Skills](https://skills.github.com/)
- [GitHub Actions Documentation](https://docs.github.com/en/actions)
- [GitHub CLI Documentation](https://cli.github.com/manual/)
- [Git Documentation](https://git-scm.com/doc)

### 7.8 Final Notes

- GitHub is useful for hosting and collaborating on software projects.
- Pull Requests make code review and collaboration easier.
- Issues and Projects help organize development work.
- GitHub Actions automates testing and development workflows.
- Open-source contributions provide practical experience with collaborative development.

---
